//Find the length of the longest consecutive sequence of integers in an unsorted array.

#include <stdio.h>

int main() {
    int a[] = {100, 4, 200, 1, 3, 2};
    int n = 6;
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        int isStart = 1;

        // check if a[i]-1 exists
        for(int j = 0; j < n; j++) {
            if(a[j] == a[i] - 1) {
                isStart = 0;
                break;
            }
        }

        if(isStart) {
            int curr = a[i];
            int len = 1;

            while(1) {
                int found = 0;
                for(int k = 0; k < n; k++) {
                    if(a[k] == curr + 1) {
                        curr++;
                        len++;
                        found = 1;
                        break;
                    }
                }
                if(!found) break;
            }

            if(len > maxLen)
                maxLen = len;
        }
    }

    printf("Length of longest consecutive sequence = %d\n", maxLen);
    return 0;
}
