// week08_5_Happy_bubble_part2
void setup(){
  size(400, 400);
  }
  int x, y, s; 
  void draw(){
    background(255);
    ellipse(x, y, s*0.7, s);
    if(mousePressed) s++;
  else{
    if(y>s+1) y-=2;
   }
  }
  void mousePressed(){
    x = mouseX;
    y = mouseY;
    s = 1;
  }
