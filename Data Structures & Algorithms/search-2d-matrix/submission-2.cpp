class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row=matrix.size();
        int column=matrix[0].size();
        // cout<<top<<" "<<bottom<<endl;
        int top=0,bottom=row-1;

        while (top<=bottom){
           int  mid=(top+bottom)/2;
            if (target>matrix[mid][column-1]){
                top=mid+1;
            }
            else if (target<matrix[mid][0]){
                bottom=mid-1;
            }
            else{
                break;
            }

        }
        if(!(top<=bottom)){
            return false;
        }
        top=(top+bottom)/2;
        int left=0,right=column-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(matrix[top][mid]>target){
                right=mid-1;
            }
            else if(matrix[top][mid]<target){
                left=mid+1;
            }
            else{
                return true;
            }
        }
        // cout<<"Top: "<<top<<" Bottom: "<<bottom<<endl;
        return false;
        
    }
};
