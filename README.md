# Goon

## The Idea

```go

// Comments

struct Person {
  name: string
  age: int
  personCounter: static int

  implement {
    func new(name: string, age: int) Person {
      this->name = name
      this->age = age
    }

    func sayHello() nil {
      outputChatBox("Hello, ${this->name}!")
    }

    static func incrementPersonCounter() nil {
      this.personCounter += 1
    }
  }
}

let me: Person = new Person("Mark", 21)
me->sayHello()
Person.incrementPersonCounter()
```