#include<iostream>
using namespace std;

class base{
    protected:
        int a;
    private:
    int b;
};
/*
for s protected member:
                public derivative       private derivative      protected derivative
private         not inharited           not inharited           not inharited
public          protected               private                 protected
protected       public                  private                 protected
*/
int main(){
    
    return 0;
}