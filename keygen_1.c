#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]){
	if(argc==2){
		printf("cheacking %s\n",argv[1]);
		int sum = 0;
		for(int i=0;i<strlen(argv[1]);i++){
			sum += (int)argv[1][i];
		}
		printf("value %d\n",sum);
		if(sum==144){
			printf("Access Granted");
		} else {
			printf("denied\n");
		}
	} else {
		printf("Usage\n");
	}
	return 0;
}








import random
import sys
from string import *
payload=ascii_lowercase+ascii_uppercase+digits
print(random.choice(payload))
def test(key):
    a=0
    for i in key:
        a +=ord(i)
       #print(a,key)
    return a
key=''
while(True):
    key += random.choice(payload)
    s = test(key)
    if s > 916 :
        key=""
    elif s==916:
        print("found",key)


