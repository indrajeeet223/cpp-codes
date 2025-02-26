    #include<iostream>
    using namespace std;
    class minheap{
        public:
        int arr[50];
        int idx;
        minheap()
        {
            idx=1;
        }
    void push(int val)
    {
        arr[idx]=val;
        int i=idx;
        idx++;
        while(i!=1)
        {
            int parent=i/2;
            if(arr[i]<arr[parent])
            {
                swap(arr[i],arr[parent]);
            }
            else break;
            i=parent;
        }

    }
    int size(){
        return idx-1;
    }
    void display()
    {
        for(int i=1;i<idx-1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    };


    int main()
    {
    minheap pq;
    pq.push(5);
    pq.push(2);
    pq.push(1);
   
    pq.push(120);
    pq.push(100);
    pq.push(200);
    pq.push(3);
        pq.display();

    }