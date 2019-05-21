//
// Created by Mr.Yang on 2019-05-21.
//
typedef struct _Range {
    int start, end;
} Range;

Range new_Range(int s, int e) {
    Range r;
    r.start = s;
    r.end = e;
    return r;
}

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void quick_sort(int arr[], const int len) {
    if (len <= 0)
        return;
    Range r[len];
    int p = 0;
    r[p++] = new_Range(0, len - 1);
    while (p) {
        Range range = r[--p];
        if (range.start >= range.end)
            continue;
        int mid = arr[(range.start + range.end) / 2];// 选择基准
        int left = range.start, right = range.end;
        do {
            while (arr[left] < mid) {
                ++left;
            }
            while (arr[right] > mid) {
                --right;
            }
            if (left <= right) {
                swap(&arr[left], &arr[right]);
                left++;
                right--;// 移动指针
            }

        } while (left <= right);

        if (range.start < right) {
            r[p++] = new_Range(range.start, right);
        }
        if (range.end > left) {
            r[p++] = new_Range(left, range.end);
        }
    }
}

void quick_sort_recursive(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = arr[end];
    int left = start, right = end - 1;
    while (left < right) {
        while (arr[left] < mid && left < right) {
            left++;
        }
        while (arr[right] >= mid && left < right) {
            right--;
        }
        swap(&arr[left], &arr[right]);
    }
    if (arr[left] >= arr[end]) {
        swap(&arr[left], &arr[end]);
    } else {
        left++;
    }
    if (left) {
        quick_sort_recursive(arr, start, left - 1);
    }
    quick_sort_recursive(arr, left + 1, end);

}