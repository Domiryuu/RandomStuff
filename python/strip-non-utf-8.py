f=open('in.txt', "r")
o=open('out.txt, "w+")
for line in f:
    line = line.strip()
    line = line.decode('utf-8','ignore').encode("utf-8")
    o.write(line + '\n')
