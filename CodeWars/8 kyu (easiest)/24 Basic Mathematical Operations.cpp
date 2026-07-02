int basicOp(char op, int val1, int val2) {
  // Your code here
  int result;
  if(op == '+')
  {
    result = val1 + val2;
  } else if(op == '-')
  {
    result = val1 - val2;
  } else if(op == '*')
  {
    result = val1 * val2;
  }else if(op == '/')
  {
    result = val1 / val2;
  } else 
  {
    std::cout << "Not Valid\n";
  }
  return result;
}
