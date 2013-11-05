#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

int n;
int a[30];
int key;

int bin_search(int head, int tail) {
    /* Cannot find element. */
    if (head > tail)
        return -1;

    int mid = (head + tail) / 2 + (head + tail) % 2;

    /* Quick find */
    // if (a[mid] == key) return mid;
    

    /* Another terminate condition */
    if (head == tail) return head;


    if (a[mid] > key)
        return bin_search(head, mid - 1);
    else if (a[mid] <= key)
        return bin_search(mid, tail);

}

int main() {
    /* Read data */
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    key = 3;
    cout << bin_search(0, n-1) << endl;
}
