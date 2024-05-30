#include <iostream>
using namespace std;

class queues {
    private:
    static const int max = 3;
     int FRONT, REAR;
        int queue_array[max];

         public: 
          queues() {
            FRONT =-1;
            REAR =-1;    
        } 
        void insert(){
             int num;
             cout << "Enter a number: ";
             cin >> num;
             cout << endl;
        
        
               // cek apakah antrian penuh 
            if ((FRONT == 0 && REAR == max - 1 ) || (FRONT == REAR +1)) {
                cout << "\nqueue overflow\n";
                return;
            }
        }; 
                 
};
    