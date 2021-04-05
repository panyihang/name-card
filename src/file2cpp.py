data_dir = "data"
cppFlie = '../auto.cpp'
indexFile = [
    'index.html',
]
serverName = 'server'
import os
import random
import string
def getRawFileList(path):
    file_list=[]
    file_names=[]
    for root, dirs, files in os.walk(path):
        for f in files:
            file_list.append(os.path.join(root, f))
            file_names.append(f)
    return file_list, file_names

def randomHex(length):
    result = 'file_'
    result += ''.join(random.sample(string.ascii_letters + string.digits, length))
    return result
    
def getFileInfo(filename):
    flag = True
    if ".png" in filename:
        return("image/png",flag)
    elif ".htm" in filename or ".html" in filename:
        return("text/html",flag)
    elif '.jpg' in filename:
        return("image/jpeg",flag)
    elif '.css' in filename:
        return("text/css",flag)
    elif '.js' in filename:
        return("text/javascript",flag)
    elif '.gif' in filename:
        return("image/gif",flag)
    elif '.woff' in filename:
        return("font/woff",flag)
    else:
        flag = not flag
        return(None,flag)

if __name__ == '__main__' :
    commandText =""
    files,names = getRawFileList(data_dir)
    for i in range(len(files)):
        if len(str(files[i]).lstrip(data_dir))>=31:
            print('Wroing: file [%s] name was too long' % str(files[i]).lstrip(data_dir))
        getInfo,getFlag=getFileInfo(str(files[i]).lstrip(data_dir))
        if "." in str(files[i]).lstrip(".") and getFlag:
            with open(cppFlie,'a',encoding='utf-8') as f:
                randomName = str(randomHex(16))
                f.write("void %s() { \r" % randomName)
                f.write('       File file = SPIFFS.open("%s","r"); \r' % str(files[i]).lstrip(data_dir) )
                f.write('       %s.streamFile(file, "%s"); \r' % (serverName,getInfo))
                f.write("       file.close();\r")
                f.write("}\r")
                commandText+=('%s.on("%s",%s);\r') % (serverName,str(files[i]).lstrip(data_dir),(randomName))
                for y in range(len(indexFile)):
                    if indexFile[y] in files[i]:
                        commandText = (('%s.on("/",%s);\r') % (serverName,randomName)) + commandText
        else :
            pass
    with open(cppFlie,'a',encoding='utf-8') as f:
        f.write(commandText)