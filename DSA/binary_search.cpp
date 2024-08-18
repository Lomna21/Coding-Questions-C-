#include<iostream>
using namespace std;

int binarySearch(int arr[], int size,int key){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;//we do this so that mid don't exceed from integer range
    //as in (start+end) method it can exceed that valse...
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
        if(key>arr[mid]){
            start=mid+1;
        }
        else{//key<arr[mid]
            end=mid-1;
        }
        mid=start + (end-start)/2;
    } 
    return -1;
}