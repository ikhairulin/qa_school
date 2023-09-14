Описание ПО.

Ссылка на папку с дистрибутивами LR:
LoadRunner - Яндекс.Диск (yandex.ru)
https://disk.yandex.ru/d/jZS32SGUoq_CTA/LoadRunner

В папке две версии:
•	HP LoadRunner 12.53 - 2016 года, у которой встроен оффлайн-справочник по всем функциям и прочим полезным данным;
•	MicroFocus LoadRunner 2021 – более новая версия с исправлением некоторых багов, но отсутствует оффлайн-справочник, справка запрашивается с официального сайта, который доступен только через VPN.


Задача.

С помощью hp loadrunner необходимо записать автоматизированный скрипт (используя протокол WebHTTP).

В видеоуроке показан пример записи скрипта через вконтакте. Со времени записи урока процесс создания новой Учетной Записи (УЗ) и входа в систему сильно усложнился. При этом скрипт необходимо проверять на нескольких разных УЗ.

Поэтому для упрощения выполнения задания на выбор предлагается два сценария для записи скрипта:

1.	Работа с почтой (mail.ru либо другой доступный почтовый сервис).
Сценарий:
* Открыть главную страницу входа;
* Ввести валидный логин и пароль, осуществить вход в систему;
* Написать письмо и отправить его получателю;
* Выполнить выход из почты.

2.	Работа с личной страницей соцсети.
 Сценарий:
* Открыть главную страницу в одноклассниках (или вконтакте);
* Ввести валидный логин и пароль, осуществить вход в систему;
* Опубликовать сообщение;
* Выполнить выход из социальной сети.

При выполнении записи необходимо расставлять так называемые транзакции. Кнопки start transaction и end transaction. Рекомендуется изучить инструкцию по использованию данных механизмов перед выполнением записи.

После записи, используя автоматически сгенерированный скрипт, необходимо:

1.	Изучить работу функции web_reg_find и расставить эту функцию перед ключевыми запросами к серверу, ответы на которые имеют значимый для сценария смысл.
Например:
•	при логине в систему нужна проверка успешного входа и отсутствия ошибки;
•	при публикации сообщения на стену в ответе от сервера должна вернуться обновлённая страница с только что опубликованным текстом, иначе сценарий отработал не корректно;
•	при отправке письма через почтовый сервис необходимо проверить, что вернулось сообщение об успешной отправке.
Просмотр ответов от сервера при записи и воспроизведении рекомендуется выполнять в представлении view – snapshots.

2.	Выполнить корреляционный анализ и заменить все используемые в запросах id и параметры на те, что приходят в ответах от сервера в первых запросах.
Для этого рекомендуется изучить и использовать design studio и осмысленно применять её предложения по корреляции, корректируя предлагаемые ей регулярные выражения на более продуманные.
А также рекомендуется изучить и использовать механизм view - snapshots для ручного поиска и корреляции значений путём анализа запросов/ответов, выполненных при записи и при воспроизведении (сравнение и поиск изменений/аномалий).

3.	Логин и пароль вынести в параметры вида File table и задать несколько логинов и паролей с настройкой выбора рандомного при каждой новой итерации выполнения скрипта.
На время отладки скрипта рекомендуется оставить в таблице только одну пару, отличную от той, которая использовалась при записи.
После данной параметризации, выполнить скрипт и повторно выполнить пункт 2 и выявить дополнительные корреляции, если они имеют место быть.
Для сценария отправки писем необходимо ввести параметр, отвечающий за email получателя, значений должно быть также несколько, выбираться рандомно.

4.	В текст публикуемого сообщения или отправляемого письма добавить текущую дату и время, которая всегда должна соответствовать текущему времени выполнения скрипта.

5.	Блок запросов, которые относятся к публикации сообщения или отправке письма, обернуть в цикл.
Цикл должен выполняться X раз. X должен задаваться параметром через стандартный механизм параметров loadrunner.
Вся транзакция должна быть обёрнута в цикл, чтобы на выходе было X транзакций публикации.
Рекомендуется изучить и использовать функции atoi и lr_eval_string


Результат.

Результатом успешного выполнения задания должен быть рабочий скрипт, который:

1.	Выполняет вход под любым из заданных через параметр корректными пользователем и паролем и успешно выполняет публикацию Х сообщений либо отправку X писем, все транзакции в статусе PASS.

2.	Выполняет вход под любым из заданных через параметр некорректными пользователем и паролем (неправильный логин или пароль) и завершается с транзакцией в статусе FAIL.