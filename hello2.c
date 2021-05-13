//
// Created by Bao Lam on 5/11/2021.
//

//
// Created by Bao Lam on 5/11/2021.
//

#include "user.h"
#include "stat.h"
#include "types.h"
#include "x86.h"
#include "mmu.h"


int main(){
    int i, k;
    set_prior(20);
    for(i = 0; i < 33000; ++i){
        asm("nop");
        for (k = 0; k < 33000; ++k){
            asm("nop");
        }
    }
    exit();
    return 0;
}