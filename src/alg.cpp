// Copyright 2021 NNTU-CS
int cbinsearch(int* arr, int size, int value) {
	int i = 0, j = size - 1, count = 0;
	while (i < j) {
		int mid = i + (j - 1) / 2;
		if (arr[mid] > value)
			j = mid;
		else
			i = mid + 1;
	}
	if (arr[i] == value) {
		while (arr[i] == value) {
			count++;
			i++;
    }
  }
	if (count)
        	return count;
    	else
        	return 0;
}
