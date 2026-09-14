Create table if not exists products (
  id integer primary key,
  name text not null,
  price integer not null check (price >= 0)
);

--insert into prod крч коменты это

insert into products values (4, 'book5', 104);

select name, price from products