#include <iostream>
#include <string>
using namespace std;
int main() {
    //variables
    string name = "Lokang";
    int age = 40;
    //outputting variables
    cout << "name: " << name << endl;

    /**
     * ARRAYS
     */
     string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
     for(int s = 0; s<week->length(); s++){
         cout << week[s] << endl;
     }
    /**
     * operators
     */
     /**
      * logical operators
      * &&(and), ||(or) and !(not)
      */
     if((name == "Lokang") && (age == 40)){
         cout << "You are " << name << endl;
     }

     /**
      * arithmetic operator
      * +, -, * and /
      */
      int a = 5;
      int b = 7;
      int sum = b-a;
      cout << "sum: " << sum << endl;

      /**
       * comparison operator
       * <, <=, >, <=, ==
       */
       if(b > a){
           cout << "b is greater than a" << endl;
       }

       /**
        * assignment operator
        * =, +=, *=, -=, /=
        */

       int k = 9;
       cout <<  k  << endl;

       k += k;
       cout << k << endl;

       /**
        * CCONTROL FLOW
        */
        /**
         * Conditional
         * if, else if, else switch
         */
         //if
         if(name == "Lokang"){
             cout << name << endl;
         }
        //else if
        if(name == "lokang"){
            cout << name << endl;
        } else if (age == 40){
            cout << "you are "<<name << " and "<<age << endl;
        }
        //else
        if(name == "lokang"){
            cout << name << endl;
        } else if (age < 40){
            cout << "you are young "<<name << endl;
        }else{
            cout << "You are not Lokang and not 40 years old";
        }
        /**
         * loops
         * for, while, do while
         */
        //for
        for(int i = 0; i < 5; i++){
            cout << i << endl;
        }

        //while
        int i = 0;
        while(i < 5){
            cout << i << endl;
            i++;
        }

        int d = 0;
        do {
            cout << d << endl;
            d++;
        }while(d<5);
    return 0;
}
