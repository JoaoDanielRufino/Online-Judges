vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int i, j, iEnd, jEnd;
    vector<int> vet;
    j = i = 0;
    iEnd = A.size()-1;
    jEnd = A[0].size()-1;

    
    while(i <= iEnd && j <= jEnd) {
        for(int k = j; k <= jEnd; k++)
          vet.push_back(A[i][k]);
        i++;

        for(int k = i; k <= iEnd; k++)
          vet.push_back(A[k][jEnd]);
        jEnd--;
    
        if(i <= iEnd) {
          for(int k = jEnd; k >= j; k--)
            vet.push_back(A[iEnd][k]);
          iEnd--;
        }
    
        if(j <= jEnd) {
          for(int k = iEnd; k >= i; k--)
            vet.push_back(A[k][j]);
          j++;
        }
    }
    
    
    return vet;
}