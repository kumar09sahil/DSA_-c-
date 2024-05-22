#include<bits/stdc++.h>
using namespace std;

void minHeapInsertion(vector<int>& heap, int val)
{
    heap.resize(heap.size()+1);
    heap[heap.size()-1]=val;
    int i=heap.size()-1;
    while(i/2 > 0 && heap[i] < heap[i/2])
    {
        swap(heap[i],heap[i/2]);
        i=i/2;
    }
}

void minHeapDeletion(vector<int>&heap)
{
    swap(heap[1],heap[heap.size()-1]);
    heap.pop_back();
    int curr = 1;
    while(curr*2 < heap.size())
    {
        int next = curr*2;
        if(next+1 < heap.size() && heap[next]> heap[next+1])
        {
            next++;
        }
        
        if(heap[curr]> heap[next])
        {
            swap(heap[curr],heap[next]);
            curr = next;
        }
        else{
            break;
        }
    }
}

void maxHeapInsertion(vector<int>&maxheap, int val)
{
    maxheap.push_back(val);
    int i= maxheap.size()-1;
    while(i/2>0 && maxheap[i] > maxheap[i/2])
    {
        swap(maxheap[i], maxheap[i/2]);
        i = i/2;
    }
}

void maxheapDeletion(vector<int>& heap)
{
    swap(heap[1],heap[heap.size()-1]);
    heap.pop_back();
    int n= heap.size()-1;
    int curr = 1;
    while( curr*2 < n)
    {
        int next = curr*2;
        if(next+1 < n && heap[next] < heap[next+1])
        {
            next++;
        }
        if(heap[curr]< heap[next])
        {
            swap(heap[curr],heap[next]);
            curr = next;
        }
        else
        {
            break;
        }
    }
}

void minHeapify(vector<int>& heap, int index)
{
    int n = heap.size() - 1;
    int leftChild = 2 * index;
    int rightChild = 2 * index + 1;
    int smallest = index;

    if (leftChild <= n && heap[leftChild] < heap[index]) {
        smallest = leftChild;
    }

    if (rightChild <= n && heap[rightChild] < heap[smallest]) {
        smallest = rightChild;
    }

    if (smallest != index) {
        swap(heap[index], heap[smallest]);
        minHeapify(heap, smallest);
    }
}





int main()
{
    vector<int>heap = {0,10,20,30,40,50};
    vector<int>maxheap = {0,60,40,30,20,10};
    vector<int> v = {0,60,10,80,50,5,20,70};
    // minHeapInsertion(heap,5);
    // maxHeapInsertion(maxheap,70);
    // minHeapDeletion(heap);
    // for(int i=0;i<heap.size();i++)
    // {
    //     cout<<heap[i]<<" ";
    // }
    // maxheapDeletion(maxheap);
    // cout<<"\n";
    // for(int i=0;i<maxheap.size();i++)
    // {
    //     cout<<maxheap[i]<<" ";
    // }
    minHeapify(v,1);
    for(int i=1;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}