## Особенности паттерна State

* Объекты класса State часто бывают одиночками.

* [Flyweight] показывает, как и когда можно разделять объекты State.

* Паттерн [Interpreter] может использовать State для определения контекстов при синтаксическом разборе.

* Паттерны State и [Bridge] имеют схожие структуры за исключением того,
что [Bridge] допускает иерархию классов-конвертов (аналогов классов-"оберток"), а State - нет.
Эти паттерны имеют схожие структуры, но решают разные задачи:
State позволяет объекту изменять свое поведение в зависимости от внутреннего состояния,
в то время как [Bridge] разделяет абстракцию от ее реализации так, что их можно изменять независимо друг от друга.

* Реализация паттерна State основана на паттерне [Strategy]. Различия заключаются в их назначении.

[Flyweight]: https://github.com/AlvinGames/design-patterns-cpp/tree/master/Structural%20Patterns/Flyweight
[Interpreter]: https://github.com/AlvinGames/design-patterns-cpp/tree/master/Behavioral%20Patterns/Interpreter
[Bridge]: https://github.com/AlvinGames/design-patterns-cpp/tree/master/Structural%20Patterns/Bridge
[Strategy]: https://github.com/AlvinGames/design-patterns-cpp/tree/master/Behavioral%20Patterns/Strategy
