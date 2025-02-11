int workbook(int n, int k, vector<int> arr) {
    int sp = 0;
    int pg = 1;

    for (int i = 0; i < n; ++i) {
        int chp = arr[i];
        
        for (int j = 1; j <= chp; ++j) {
            if (j == pg) {
                ++sp;
            }
            
            if (j % k == 0 || j == chp) {
                ++pg;
            }
        }
    }

    return sp;
}
