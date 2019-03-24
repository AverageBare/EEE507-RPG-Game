# EEE507-RPG-Game
Description - Top down, comand window, RPG game createc by Theo De Groot B00 , Jeremy Eastwood-Smith B00695171, 
Conan McIlkenny B00 , Jordan McMullan B00 , Cathal O,Callaghan B00 .

## Expected Classes (& inheritance):

 1, Input and Options (Jordan)
    
    -Which hotkeys do what ?
    
    -movement and aim
    
    -scoreboad
    
    -main menu
  
 2, Characters (Cathal)
  
    -Characer creation options
  
    -Player (playable classes?)
    
    -NPC
    
    -Enemy
    
 3, Items (Conan)
  
    -Inventory
  
    -Weapons
    
    -Armour
    
    -Potions/Food 
    
 4,  Scoring / Questing
  
    -Combat loot: gold, XP +? 
    
    -Quest Log
    
    - Quests
    
 5, Map/ Display (Theo)
  
    -How large
    
    -Room no. 
    
    -Map design, Random level generator
    
    - Character, Enemy and item locations
    
    -Transition from level to level?
  
  6, Character AI (Jeremy)
  
    Base AI
    
    Derived Hostiles
    
    Class Services:
     Base
      - bool GetThreat()
      -  SetThreat(bool agro)
      - int GetDirection()
      -  SetDirection(int dir) // (enums)
      -  Follow(Player/Character toFollow)
     
     Hostile
      - bool AttackPlayer((class)Player target) // take damage
      -  Target(int numOfCharacters) // targetting decision
      -  Update()
    
    Needed Services:
     - Character positions
     - Static object positions
 
  
## Always remember:
  
   -JavaDoc comments, good variable and function names and readability.
  
   -Clear allocated data E.G. Character killed, clean up memory allocation (so the data (location) is not lost to the void)
    to avoid memory leaks.
    
## Usefull Links:

Text Adventure, general layout - https://codereview.stackexchange.com/questions/80531/c-text-based-rpg

RPG tutorial - https://www.youtube.com/watch?v=shsmu3GX0s4

OOP RPG game (w/ sprites) - https://www.youtube.com/watch?v=xXXt3htgDok

Faster Drawing to CMD window, FPS shooter Doom Style - https://www.youtube.com/watch?v=xW8skO7MFYw

Maze Creator - https://www.youtube.com/watch?v=Y37-gB83HKE&t=1360s
