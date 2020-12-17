 #include<iostream>
 #include<vector>
 using namespace std;
 vector<int> spiralOrder(vector<vector<int> >& matrix) {
        vector<int>array;
        int topRow,bottomRow,leftCol,rightCol;
        topRow=0;
        leftCol=0;
        rightCol=matrix[0].size()-1;
        bottomRow=matrix.size()-1;
        int i;
        while(topRow<=bottomRow &&  leftCol<=rightCol){
            for(i=leftCol;i<=rightCol;i++){
                array.push_back(matrix[topRow][i]);
            }
            
            for(i=topRow+1;i<=bottomRow;i++){
                array.push_back(matrix[i][rightCol]);
            }
              if(matrix.size()!=matrix[0].size() &&       (topRow==bottomRow||leftCol==rightCol))
               break;
          
            for(i=rightCol-1;i>=leftCol+1;i--)
                array.push_back(matrix[bottomRow][i]);
            for(i=bottomRow;i>=topRow+1;i--)
                array.push_back(matrix[i][leftCol]);            
            topRow++;
            leftCol++;
            rightCol--;
            bottomRow--;
        }
        return array;
}
int main(){
   //declaring the matrix for 2D array
   int m,n,ele;
   cin>>m>>n;
   vector<vector<int> >matrix;
   
   
   // This is the method of taking input of 2D vector
   for(int i=0;i<m;i++){
   	vector<int>array(0);
   	  for(int j=0;j<n;j++){
   	  	   cin>>ele;
   	  	   array.push_back(ele);
		 }
		 matrix.push_back(array);
     }
     vector<int>spiralArray= spiralOrder(matrix);
     for(int i=0;i<spiralArray.size();i++){
     	cout<<spiralArray[i]<<" ";
	 }
     
	    
     
	
}
