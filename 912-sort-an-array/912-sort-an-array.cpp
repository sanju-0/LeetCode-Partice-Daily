class Solution {
public:
  int partition(vector<int>&arr,int start,int end){
        int pivot=arr[end];
        int partIdx=start;
        for(int i=start;i<end;i++){
            if(arr[i]<=pivot){
                swap(arr[i],arr[partIdx]);
                partIdx++;
            }
        }
        swap(arr[partIdx],arr[end]);
        return partIdx;
    }
    int randompartition(vector<int>&arr,int start,int end){
		//select random element of array :
        srand(time(NULL));
        int pI = start + rand() % (end - start);
        swap(arr[pI],arr[end]);
        return partition(arr,start,end);
    }
    void quickSort(vector<int>&arr,int start,int end){
        if(start<end){
            int partitionIndex=randompartition(arr,start,end);
            quickSort(arr,start,partitionIndex-1);
            quickSort(arr,partitionIndex+1,end);
        }
    }
    vector<int> sortArray(vector<int>& arr) {
        //Quick sort : time: O(nlogn) and space : O(1)
        quickSort(arr,0,arr.size()-1); 
        return arr;
    }
};