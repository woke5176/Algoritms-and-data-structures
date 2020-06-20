#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int prio(char c){
	switch(c){
		case +:
		case -:
			return 1;
		case *:
		case /:
			return 2;
		case ^:
			return 3;
	}
	return -1;
}

