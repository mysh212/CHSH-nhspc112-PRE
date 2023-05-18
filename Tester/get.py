import os
os.system("dir /B > 1.tmp")
f = open("1.tmp","r")
g = []
for i in f:
    try:
        if i.find('.tmp') != -1:
            continue
        a = i.split('.')
        g.append([a[1],a[0],a[3],a[4].replace('_',':'),a[5],a[6].replace('\n',''),i.replace('\n','')])
    except:
        continue
for i in sorted(g):
    print('|',end = ' ')
    for j in range(6):
        print(f'[{i[j]}](https://github.com/mysh212/CHSH-nhspc112-PRE/blob/main/Tester/{i[6]})',end = ' | ')
    print('')
os.system("del 1.tmp")
quit()