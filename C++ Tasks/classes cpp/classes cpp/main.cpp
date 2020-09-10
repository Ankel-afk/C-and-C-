//
//  main.cpp
//  classes cpp
//
//  Created by Jose Ignacio Biehl on 23.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <iostream>
class Percolation{
public:
    int** arr;
    int opensites;
    Percolation(int n){
        for (int i =0; i < n; i++){
            arr[i] = new int[n];
            if (!arr[i]){exit(1);}
        }
        opensites = 0;
    }
      // opens the site (row, col) if it is not open already
    void open(int row, int col){
        arr[row][col]= 1;
        opensites++;
    }

    // is the site (row, col) open?
    bool isOpen(int row, int col){
        return (arr[row][col]==1);
    }

    // is the site (row, col) full?
    bool isFull(int row, int col){
        
        
        
    }

    // returns the number of open sites
    public int numberOfOpenSites()

    // does the system percolate?
    public boolean percolates()

    // test client (optional)
    public static void main(String[] args)
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
