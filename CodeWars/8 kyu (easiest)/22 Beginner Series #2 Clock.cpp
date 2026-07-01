int past(int h, int m, int s) {
  // your code here
  int seconds_in_Hours = h * 3600000;
  int seconds_in_Minutes = m * 60000;
  int seconds = s * 1000;
  int Total = seconds_in_Hours + seconds_in_Minutes + seconds;
  return Total;
}