#!/bin/bash

# Функция для скачивания изображений
downloadImg() {
    # Получаем текущий час
    current_hour=$(date +"%H")
    # Создаем папку для текущего часа, если её ещё нет
    folder="/home/kirirun/img_$current_hour"
	
    if [ ! -d "$folder" ]; then
        mkdir $folder
    fi
    
    # Скачиваем изображения
    for i in {1..3}; do
        url="https://masterpiecer-images.s3.yandex.net/fb44a4fe659111eeab5756181a0358a2:upscaled"
        filename="${folder}/img_${i}.jpg"
		
        wget -O "$filename" "$url"
    done
	
	echo "Скачаны изображения за $current_hour час"
}

# Функция для сохранения архива
saveArchive() {
    date="img_$("%Y-%m-%d").tar.gz"
    
    tar -czf "/home/kirirun/$date" img_{1..24}h/
    
    echo "Создан архив за $date"
}

# Основная часть скрипта
if [[ $(date +"%H") == "00" ]]; then
    downloadImg
    saveArchive
else
    downloadImg
fi

# Скрипт через cron не работал пока я не указа полные пути, по этому для запуска нужнно 8 и 29 строки отредактировать.
# Ниже описал свои шаги при работе со скриптом.
# Команда для передачи скрипта на виртаулку (если файл в папке пользователя):
# scp imgScript.sh kirirun@192.168.31.48:/tmp/
# После коннекта к виртуалке пермещаем скрипт в директорию пользователя:
# mv /tmp/imgScript.sh /home/kirirun/
# Делаем скрипт исполняемым:
# chmod a+x imgScript.sh
# Запускаем скрипт для проверки:
# bash imgScript.sh
# Если полезет ошибка с маркером «$'{\r'»:
# sed -i 's/\r//g' imgScript.sh
# Добавляем скрипт в cron:
# sudo crontab -e
# @hourly /home/kirirun/imgScript.sh