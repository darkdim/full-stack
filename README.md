# full-stack
Тестовое задание

BackEnd

Создать модуль rn_page.
 
0. Используя drupal 7.
1. Модуль должен появится в списке модулей, на странице: admin/modules 
2. После включения модуля, должны стать доступены пути: /drupal-test-task, /drupal-test-task-views.
3. При обращении по пути: drupal-test-task - должна отобразиться таблица с пользователями системы (колонки: id, username и ссылка на редактирование), максимум 50 записей. Для вывода использовать API Drupal (#theme => table).
4. При обращении по пути: drupal-test-task-views - должна отобразиться таблица с пользователями системы (колонки: id, username и ссылка на редактирование). Для вывода использовать Views. Завернуть в фичу, поместить в модуль.
5. Загрузить модуль на github и прислать ссылку.
6. При написании модуля учитывать Drupal Coding Standarts https://www.drupal.org/coding-standards. 
FrontEnd
Написать Drupal behaviour, который применит виджет selectmenu (http://jqueryui.com/selectmenu/), на все селекты на странице.

1. Написать html страницу с формой
2. Подключить   jquery.once.js, misc/drupal.js (оба файла можно взять из ядра Drupal 7 - https://www.drupal.org/project/drupal)
3. Подключить Ваш кастомный скрипт
4. Выкладывайте на github
