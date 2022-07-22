class Solution {
    public int countPrimes(int n) {
        boolean[] b = new boolean[n];
        for (int i = 2; i < n; i++){
             b[i] = true;
         }
       for (int i = 2; i * i < n; i++){
             if (!b[i]) continue;
            for (int j = i*i; j < n; j+=i){
                b[j] = false;
         }
      }
        int c=0;
        for(int i=0; i<n ; i++){
            if(b[i]) c++;
        }
        return c;
    }
}