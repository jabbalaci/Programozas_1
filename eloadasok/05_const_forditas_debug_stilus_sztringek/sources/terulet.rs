// Rust példa.
// Rust-ban a read-only mód az alapértelmezés.
// Ha valamit módosíthatóvá akarunk tenni, akkor
// azt külön jeleznünk kell.

fn terulet(a: i32, b: i32) -> i32
{
    return a * b;
}

fn main()
{
    let mut a: i32 = 3;
    let b: i32 = 2;

    a = 4;
    b = 5;    // Hiba! b immutable

    let t = terulet(a, b);
    println!("terület: {}", t);
}
