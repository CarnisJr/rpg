# Notas
Hacer un rpg en el cual se pueda realizar determinas acciones. El juego durará 10 días (medida del juego).
Las estadisticas iniciales son:
- vida: 100
- hambre: 10
- sed: 15
## Probabilidades, aumentos y reducciones de estadisticas
- Cada día el hambre y la sed aumentan en 10 unidades
- Descansar te regenera 10 unidades de vida
    - No se puede descansar si se tiene 100 puntos de vida
- Buscar agua: 
    - 20% de probabilidad de encontrar un arroyo, disminuye 25 unidades la sed.
    - 35% de probabilidad de encontrar botellas de agua, disminuye 5 unidades de sed.
    - 45% de probabilidad de sufrir un ataque que te reduce la vida en 5 unidades.
    - Si tienes 0 puntos de sed no puedes ir a buscar agua.
- Cazar:
    - 30% de probabilidad de cazar un conejo, reduce el hambre en 30 unidades.
    - 30% de probabilidad de pescar un pez, reduce el hambre en 10 unidades.
    - 40% de probabilidad de sufrir un ataque, reduce la vida en 10 unidades.
- Buscar objetos:
    - 25% de probabilidad de encontrar un kit de primeros auxilios, aumenta tu vida en 15 unidades.
    - 25% de probabilidad de encontrar latas de comida, reducen el hambre en 10 unidades.
    - 25% de probabilidad de ser atacado por avispas, reduce tu vida en 10 unidades.
    - 25% de probabilidad de caer en un foso, reduce tu vida en 15 unidades.
## To do list
- [x] Interfaz de usuario
- [x] Definir las constantes
- [x] Switch de acciones del jugador
- [x] Comprobar limites de estadisticas
- [x] Acción uno "Descansar" 
- [x] Buscar agua 
- [x] Cazar 
- [x] Buscar objetos
- [x] Daño por hambre
- [x] Daño por sed
- [x] Estadisticas al final del día
- [x] Menú principal
- [x] Opción de retorno al menu principal