//
//  main.cpp
//  Pointer
//
//  Created by 20141105053w on 15/11/11.
//  Copyright © 2015年 20141105053w. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=15;
    int *p;
    p=&a;
    printf("a=%x &a=%x p=%x *p=%x &p=%x",a,&a,p,*p,&p);
    return 0;
}
