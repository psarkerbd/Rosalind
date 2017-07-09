
# coding: utf-8

# In[ ]:

# Author: Pranta Sarker
# Problem: Finding a Motif in DNA


# In[18]:

file = open('in1.txt' , 'r');
S = file.readline();
T = file.readline();

file.close();

print S;
print T;

slen = len(S)-1;
tlen = len(T)-1;

file = open('out1.txt' , 'w');

#file.write('%d ' %10);

#for i in range(len(T)):
 #   print T[i];

print slen;
print tlen;

for i in range(slen):
    tmpstr = S[i : tlen+i];
    tmpstr += '\n';
    #print tmpstr;
    if(tmpstr == T):
        file.write('%d ' %(i+1));
file.close();

