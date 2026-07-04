#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
//   if(p1 == "scissors" && p2 == "paper")
//   {
// //     return "Player 1 won!";
//   } else if(p1 == "paper" && p2 == "scissors")
//   {
//     return "Player 2 won!";
//   } else if(p1 == "scissors" && p2 == "rock" )
//   {
//     return "Player 2 won!";
//   } else if (p1 == "rock" && p2 == "scissors" )
//   {
//     return "Player 1 won!";
//   } else if(p1 == "rock" && p2 == "paper" )
//   {
//     return "Player 2 won!";
//   } else if (p1 == "paper" && p2 == "rock" )
//   {
//     return "Player 1 won!";
//   } else
//   {
//     return "Draw!";
//   }
    
    // Another Way
std::string msg = "";
std::string p1win = "Player 1 won!";
std::string p2win = "Player 2 won!"; 
    
if(p1 == p2) msg = "Draw!";
    
  if(p1 ==  "rock" )
  {
    if(p2 == "paper") msg = p2win;
    if(p2 == "scissors") msg = p1win;
  }
    
  if(p1 ==  "paper" )
  {
    if(p2 == "rock") msg = p1win;
    if(p2 == "scissors") msg = p2win;
  }
    
  if(p1 ==  "scissors" )
  {
    if(p2 == "rock") msg = p2win;
    if(p2 == "paper") msg = p1win;
  }
    
  return msg;
}