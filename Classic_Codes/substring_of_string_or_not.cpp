bool is_substring(string S, string T){
  int N = S.size();
  int M = T.size();
  for (int i = 0; i <= N - M; i++){
    if (S.substr(i, M) == T){
      return true;
    }
  }
  return false;
}