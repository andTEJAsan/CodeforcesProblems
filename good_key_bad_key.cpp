#include<iostream>
using namespace std;
 
int main(){
  /* There are n chests the ith chest contains a_i coins 
    We need to open all n chests in ordr from chest 1 to chest n 
    2 - ways at each i , either use a good key which costs k coins to use
    a bad key , which does not cosy any coins but will halve all the coins in 
    including the chest it will open a_i = 
    Find the maximum numbers of coins I can have after opening all n chest in order fro
    chest 1 to chest n .
   
   if i define f(i,x)  = maximum coins I can have after 
                        opening ith chest and making exactly 
                        x bad moves.
                        in each bad move, we do 
                f(i,x) = a(i)/ 2^x  + max(f(i-1,x-1), f(i-1,x) - k)
                f(i,x+1) = 
                x <= i+1               
                if x > i + 1 then define f(i,x) = 0
      our answer if g(n) where g(i) = sum as k goes from 0 to i+1 f(i,k) 
    */

  return 0;
}
