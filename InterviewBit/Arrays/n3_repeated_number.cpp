/*
  If there are n elements in the array , and suppose in the worst case 
  only 1 element is repeated n/3 times , then the probability of 
  choosing one number that is not the one which is repeated n/3 t
  imes will be (2n/3)/n that is 1/3 , so if we randomly choose N elements 
  from the array of size ‘n’, then the probability that we end up choosing the 
  n/3 times repeated number will be atleast 1-(2/3)^N . 
  If we equate this to say 99.99 percent probability of getting success, 
  we will get N=23 for any value of “n”.

  thanks to tvikash4622
*/

int Solution::repeatedNumber(const vector<int> &A) {
    for(int i = 0; i < 23; i++) {
        int r = rand() % A.size();
        int count = 0;
        for(int j = 0; j < A.size(); j++) {
            if(A[j] == A[r])
                count++;
            if(count > A.size()/3)
                return A[r];
        }
    }
    
    return -1;
}
