// week08_4_Happy_bubble_part1
void setup(){
  size(400, 400);
}
  int x, y, s; 
  void draw(){
    background(255);
    ellipse(x, y, s*0.7, s);
    if(mousePressed) s++;
  }
  void mousePressed(){
    x = mouseX;
    y = mouseY;
    s = 1;
  }
