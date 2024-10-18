int higherElement(const int arr[], int size); //Exercice N°1

void copyArray(const int arr1[], int size1, int arr2[], int size2); //Exercice N°2

void copyArrayV2(int arr1[], int size1, const int arr2[], int size2, const int arr3[], int size3); //Exercice N°3

int charSize(const char str[]); //Exercice N°4

int higherPrefixSize(const char str1[], const char str2[]); //Exercice N°5

int main() {
    return 0;
}

int higherElement(const int arr[], const int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        max = arr[i] > max ? arr[i] : max;
    }
    return max;
}

void copyArray(const int arr1[], const int size1, int arr2[], const int size2) {
    const int maxSize = size1 > size2 ? size1 : size2, minSize = size1 < size2 ? size1 : size2;
    for (int i = 0; i < maxSize; i++) {
        if (i < minSize) {
            arr2[i] = arr1[i];
        }
    }
}

void copyArrayV2(int arr1[], const int size1, const int arr2[], const int size2, const int arr3[], const int size3) {
    copyArray(arr2, size2, arr1, size1);
    copyArray(arr3, size3, arr1, size1);
}

int charSize(const char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        ++i;
    }
    return i;
}

int higherPrefixSize(const char str1[], const char str2[]) {
    const int minSize = charSize(str1) < charSize(str2) ? charSize(str1) : charSize(str2);
    char higherPrefix[minSize];
    for (int i = 0; i < minSize; i++) {
        if (str1[i] == str2[i]) {
            higherPrefix[i] = str1[i];
        }
    }
    return charSize(higherPrefix);
}
