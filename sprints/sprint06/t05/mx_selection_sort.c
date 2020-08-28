int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

static void mx_swap(char **arr, int i, int min) {
    char *tmp;

    tmp = arr[i];
    arr[i] = arr[min];
    arr[min] = tmp;
}

int mx_selection_sort(char **arr, int size) {
    int count = 0;
    int min;
    int i;

    for (i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (mx_strlen(arr[min]) > mx_strlen(arr[j]))
                min = j;
            if (mx_strlen(arr[min]) == mx_strlen(arr[j]))
                if (mx_strcmp(arr[min], arr[j]) > 0)
                    min = j;
        }
        if (min != i) {
            mx_swap(arr, i, min);
            count++;
        }
    }
    return count;
}
