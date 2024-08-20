const readline = prompt().split(" ");

const a = Number(readline[0]);
const b = Number(readline[1]);

const x = 1

while (true) {
  a = a * 3;
  b = b * 2;

  if( a > b ) break;

  x++;
}

console.log(x)
