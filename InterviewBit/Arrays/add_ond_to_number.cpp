vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> aux;
    int i = A.size() - 1;
    bool flag = false;
  
      if(A[i] < 9) {
        A[i]++;
        aux = A;
      }
      else {
        while(i > 0 && A[i] == 9) {
          A[i] = 0;
          if(A[i-1] < 9) {
            A[i-1]++;
            aux = A;
            flag = true;
            break;
          }
          i--;
        }
    
        if(!flag) {
            A.insert(A.begin(), 1);
            A[1] = 0;
        }
      }
      
    aux = A;    
    while(!aux[0])
        aux.erase(aux.begin());
    
    return aux;
}