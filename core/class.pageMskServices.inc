<?php
/**
 * Created by PhpStorm.
 * User: Alexey Masyukov  a.masyukov@chita.ru
 * Date: 2019-05-28
 * Time: 11:53
 */

class PageMskServices extends Page {
    public static $servicesTable = array(
        'gruzoperevozki' => array(
            'pageType' => 'service',
            'cpu' => 'gruzoperevozki',
            'galleryCategoryID' => 91,
            'russianName' => 'Грузоперевозки',
            'metaTitle' => 'Дешевые грузоперевозки в #нас-пункт-пп#, перевозка и доставка грузов, заказ газели недорого',
            'metaDescription' => 'Грузовые перевозки в #нас-пункт-пп# срочно и дешево с &amp;quot;ДомПереездов&amp;quot;. Для перевозки мебели и мелких грузов незаменимым станет заказ газели с грузчиками недорого.',
            'h1' => 'Грузоперевозки в #нас-пункт-пп#, заказ газели с грузчиками недорого',
            'titlePrice' => 'Цены на грузоперевозки',
            'titleGallery' => 'Фото машин из нашего парка',
            'titleMap' => 'Расчет стоимости перевозки в #нас-пункт-пп#',
            'reviewsServiceTitle' => 'Грузоперевозки',
            'adminPanelReviewsFormInput_usluga' => 'Грузоперевозки'
        ),
        'vyvoz-mebeli' => array(
            'pageType' => 'service',
            'cpu' => 'vyvoz-mebeli',
            'galleryCategoryID' => 92,
            'russianName' => 'Вывоз мебели',
            'metaTitle' => 'Вывоз мебели и техники на утилизацию в #нас-пункт-пп# недорого, вывоз и утилизация строительного мусора',
            'metaDescription' => 'Вывоз, утилизация мебели и техники в #нас-пункт-пп# избавит от ненужного мусора в квартире. "ДомПереездов" качественно организует демонтаж, разборку-сборку мебели, вывоз строительного мусора',
            'h1' => 'Вывоз и утилизация мебели и техники в #нас-пункт-пп# недорого',
            'titlePrice' => 'Цены на грузоперевозки',
            'titleGallery' => 'Фото вывоза мебели',
            'titleMap' => '',
            'reviewsServiceTitle' => 'Вывоз мебели',
            'adminPanelReviewsFormInput_usluga' => 'Вывоз мебели'
        ),

        // Вот эту услугу выключаем даже на готовых данных, вместо нее ниже !!!

        //    array(
        //        'pageType' => 'service',
        //        'cpu' => 'pereezd',
        //        'galleryCategoryID' => 96,
        //        'russianName' => 'Переезды',
        //        'metaTitle' => 'Переезд квартиры, офиса в #нас-пункт-пп#, газель с грузчиками недорого, перевозка мебели',
        //        'metaDescription' => 'Компания &amp;quot;ДомПереездов&amp;quot; организует квартирные, офисные, дачные переезды в #нас-пункт-пп# недорого. Опытные грузчики помогут с перевозкой мебели и техники, позаботятся о сохранности вещей.',
        //        'h1' => 'Квартирные, офисные, дачные переезды в #нас-пункт-пп# недорого',
        //        'titlePrice' => 'Цены на грузоперевозки',
        //        'titleGallery' => 'Фото машин из нашего парка',
        //        'titleMap' => 'Расчет стоимости переезда в #нас-пункт-пп#',
        //        'reviewsServiceTitle' => 'Переезды'
        //    ),


        'gruzovoe-taksi' => array(
            'pageType' => 'service',
            'cpu' => 'gruzovoe-taksi',
            'galleryCategoryID' => 91,
            'russianName' => 'Грузовое такси',
            'metaTitle' => 'Грузовое такси в #нас-пункт-пп# дешево, заказать грузотакси с грузчиками',
            'metaDescription' => 'Заказ грузового такси в #нас-пункт-пп# срочно и дешево. Доставка на грузовом такси с "ДомПереездов" экономично и надежно!',
            'h1' => 'Грузовое такси в #нас-пункт-пп#, заказать с грузчиками недорого',
            'titlePrice' => 'Цены на грузовое такси',
            'titleGallery' => 'Фото машин из нашего автопарка',
            'titleMap' => 'Расчет стоимости грузового такси в #нас-пункт-пп#',
            'reviewsServiceTitle' => 'Грузовое такси',
            'isNewService' => true,
            'adminPanelReviewsFormInput_usluga' => 'Грузовое такси'
        ),
        'kvartirnyj-pereezd' => array(
            'pageType' => 'service',
            'cpu' => 'kvartirnyj-pereezd',
            'galleryCategoryID' => 96,
            'russianName' => 'Квартирный переезд',
            'metaTitle' => 'Квартирный переезд в #нас-пункт-пп# с грузчиками недорого',
            'metaDescription' => 'Компания "ДомПереездов" организует квартирный переезд в #нас-пункт-пп# с грузчиками недорого. Сборка, разборка и упаковка вещей качественно.',
            'h1' => 'Квартирный переезд в #нас-пункт-пп# с грузчиками дешево',
            'titlePrice' => 'Цены на переезд',
            'titleGallery' => 'Фото машин для квартирного переезда',
            'titleMap' => 'Расчет стоимости переезда квартиры в #нас-пункт-пп#',
            'reviewsServiceTitle' => 'Квартирный переезд',
            'isNewService' => true,
            'adminPanelReviewsFormInput_usluga' => 'Переезды'
        ),
        'dachnyj-pereezd' => array(
            'pageType' => 'service',
            'cpu' => 'dachnyj-pereezd',
            'galleryCategoryID' => 91,
            'russianName' => 'Дачный переезд',
            'metaTitle' => 'Дачный переезд в #нас-пункт-пп# недорого с грузчиками. Перевозка мебели на дачу.',
            'metaDescription' => 'Осуществим дачный переезд в #нас-пункт-пп# с грузчиками недорого и аккуратно. Переезд на дачу с "ДомПереездов" выгодно и вежливо.',
            'h1' => 'Дачный переезд в #нас-пункт-пп#, перевозка вещей на дачу недорого',
            'titlePrice' => 'Цены на переезд',
            'titleGallery' => 'Фото машин для дачного переезда',
            'titleMap' => 'Расчет стоимости переезда на дачу в #нас-пункт-пп#',
            'reviewsServiceTitle' => 'Дачный переезд',
            'isNewService' => true,
            'adminPanelReviewsFormInput_usluga' => 'Переезды'
        ),
        'ofisnyj-pereezd' => array(
            'pageType' => 'service',
            'cpu' => 'ofisnyj-pereezd',
            'galleryCategoryID' => 96,
            'russianName' => 'Офисный переезд',
            'metaTitle' => 'Переезд офиса в #нас-пункт-пп# с грузчиками недорого. Перевозка офисной мебели.',
            'metaDescription' => 'Профессионально организуем офисный переезд в #нас-пункт-пп#. Сборка, разборка, качественная упаковка от мувинговой компании "ДомПереездов!',
            'h1' => 'Офисный переезд в #нас-пункт-пп# с грузчиками недорого',
            'titlePrice' => 'Цены на переезд',
            'titleGallery' => 'Фото машин для офисного переезда',
            'titleMap' => 'Расчет стоимости переезда офиса в #нас-пункт-пп#',
            'reviewsServiceTitle' => 'Офисный переезд',
            'isNewService' => true,
            'adminPanelReviewsFormInput_usluga' => 'Переезды'
        ),
        'perevozka-mebeli' => array(
            'pageType' => 'service',
            'cpu' => 'perevozka-mebeli',
            'galleryCategoryID' => 91,
            'russianName' => 'Перевозка мебели',
            'metaTitle' => 'Перевозка мебели в #нас-пункт-пп# с грузчиками недорого. Разборка, сборка.',
            'metaDescription' => 'Перевозка мебели в #нас-пункт-пп# c "ДомПереездов" недорого и аккуратно. Профессиональная разборка, сборка и упаковка мебели.',
            'h1' => 'Перевозка мебели в #нас-пункт-пп# с грузчиками недорого.',
            'titlePrice' => 'Цены на перевозку мебели',
            'titleGallery' => 'Фото машин для перевозки мебели',
            'titleMap' => 'Расчет стоимости перевозки мебели в #нас-пункт-пп#',
            'reviewsServiceTitle' => 'Перевозка мебели',
            'isNewService' => true,
            'adminPanelReviewsFormInput_usluga' => 'Перевозка мебели'
        ),
        'perevozka-pianino' => array(
            'pageType' => 'service',
            'cpu' => 'perevozka-pianino',
            'galleryCategoryID' => 93,
            'russianName' => 'Перевозка пианино',
            'metaTitle' => 'Перевозка пианино в #нас-пункт-пп# дешево, грузчики для перевозки пианино недорого',
            'metaDescription' => 'Профессиональная перевозка пианино, фортепиано, рояля в #нас-пункт-пп# обойдется дешево с "ДомПереездов". Грузчики для перевозки пианино помогут недорого перевести музыкальный инструмент.',
            'h1' => 'Перевозка пианино и роялей в #нас-пункт-пп# недорого',
            'titlePrice' => 'Цены на грузоперевозки',
            'titleGallery' => 'Фото перевозки пианино',
            'titleMap' => 'Расчет стоимости перевозки пианино в #нас-пункт-пп#',
            'reviewsServiceTitle' => 'Перевозка пианино',
            'adminPanelReviewsFormInput_usluga' => 'Перевозка пианино'
        ),
        'default' => array(
            'pageType' => 'town',
            'cpu' => '', // автогенерация
            'galleryCategoryID' => 98,
            'russianName' => '', // автозаполнение
            'metaTitle' => 'Недорогие грузоперевозки, переезды квартир, офисов и дач, вывоз мебели и техники на утилизацию, перевозка пианино в #нас-пункт-пп#',
            'metaDescription' => 'Компания &amp;quot;ДомПереездов&amp;quot; предлагает недорогие, но при этом качественные транспортные услуги в #нас-пункт-пп#. Кроме того к Вашим услугам бригады опытных грузчиков и такелажников.',
            'h1' => 'Недорогие транспортные услуги в #нас-пункт-пп#',
            'titlePrice' => '',
            'titleGallery' => 'Фото машин из нашего парка',
            'titleMap' => 'Расчет стоимости перевозки по #нас-пункт-пд#',
            'reviewsServiceTitle' => 'Транспортные услуги',
            'adminPanelReviewsFormInput_usluga' => 'Транспортные услуги'
        ),
    );


    /**
     * PageServices constructor.
     */
    public function __construct() {
        parent::__construct();

        if (!function_exists("mb_str_replace")) {
            function mb_str_replace($needle, $replace_text, $haystack) {
                return implode($replace_text, mb_split($needle, $haystack));
            }
        }

        // Конвертируем таблицу услуг в объект для удобства
        // Без этого половина работать не будет
        self::$servicesTable = (object)self::$servicesTable;
        foreach (self::$servicesTable as &$service) {
            $service = (object)$service;
        }
    }


    /**
     * Возвращает страницу по ее urlPath
     * @param $urlPath
     * @return mixed
     */
    private function getPageByUrlPath($urlPath) {
        $urlPath = Core::charsDecode($urlPath);
        $sql = "SELECT
                    *
                FROM
                    pages
                WHERE
                    public = 1 
                    AND cpu_path = '$urlPath'";
        $smf = Database::query($sql, 'withCountFetch');
        if ($smf->rowCount <= 0) Page::view404();
        return (object)$smf->result;
    }


    /**
     * Заменяет некоторые словосочетания на ссылки
     * @param $page
     * @return string
     */
    private function replaceWordsInTextOnLinks($page) {
        $keys = ['top_text', 'bottom_text'];
        foreach ($keys as $key) {
            $page->$key = mb_str_replace('реальных отзывов клиентов', '<a href="/otzyvy/">реальных отзывов клиентов</a>', $page->$key);
            $page->$key = mb_str_replace('сотни отзывов реальных клиентов', '<a href="/otzyvy/">сотни отзывов реальных клиентов</a>', $page->$key);
            $page->$key = mb_str_replace('рассказали в отзывах', '<a href="/otzyvy/">рассказали в отзывах</a>', $page->$key);
            $page->$key = mb_str_replace('отзывах реальных заказчиков', '<a href="/otzyvy/">отзывах реальных заказчиков</a>', $page->$key);
            $page->$key = mb_str_replace('сотни заказчиков, оставивших отзыв', '<a href="/otzyvy/">сотни заказчиков, оставивших отзыв</a>', $page->$key);
            $page->$key = mb_str_replace('сотни отзывов реальных заказчиков', '<a href="/otzyvy/">сотни отзывов реальных заказчиков</a>', $page->$key);
            $page->$key = mb_str_replace('пишут в отзывах сотни реальных клиентов', '<a href="/otzyvy/">пишут в отзывах сотни реальных клиентов</a>', $page->$key);
            $page->$key = mb_str_replace('сотнями отзывов наших клиентов', '<a href="/otzyvy/">сотнями отзывов наших клиентов</a>', $page->$key);
            $page->$key = mb_str_replace('многочисленными отзывами', '<a href="/otzyvy/">многочисленными отзывами</a>', $page->$key);
        }
        return $page;
    }

    /**
     * Получает тексты по ID страницы
     * @param $pageId
     * @param $table
     * @return array|mixed
     */
    private function getTextsByPageID($pageId, $table) {
        $sql = "SELECT 
                    top_text, 
                    bottom_text 
                FROM 
                    $table
                WHERE 
                    page_id = $pageId";
        $texts = (object)Database::query($sql, 'fetch');

        // Декодируем тексты и обрабатываем их
        foreach ($texts as &$text) {
            $text = Core::charsDecode($text);
        }
        return $texts;
    }


    /**
     * Получаем дополнительные параметры из массива self::$servicesTable
     * @return string
     */
    private function getAdditionalFields() {
        // Получаем самый последний элемент в ссылке
        // https://dp.local/moskovskaya-oblast/pavlovo-posadskiy-rayon/pavlovskiy-posad/perevozka-pianino/
        // он - это ключ массива в self::$servicesTable
        $serviceInUrl = Core::getUrl()->uriParts[count(Core::getUrl()->uriParts) - 1];

        foreach (self::$servicesTable as $service => $serviceData) {
            if ($serviceInUrl == trim($service)) {
                return $serviceData;
            }
        }
        return self::$servicesTable->default;
    }


    /**
     * Возвращает массив из Услуг для этого населенного пункта
     * @param $pageId
     * @return array
     */
    private function getSimilarServices($pageId) {
        $sql = "
            SELECT 
                name,
                cpu_path
            FROM 
                pages 
            WHERE 
                parent_id = $pageId
                AND public = 1
            ORDER BY
                id";
        $services = Database::query($sql, 'withCount');
        if ($services->rowCount > 0) {
            foreach ($services->result as &$service) {
                $service = (object)$service;
                $service->title = mb_ucfirst(str_replace([' ', ' '], ' ', $service->name));
                $service->link = $service->cpu_path;
            }
            return $services->result;
        } else {
            return array();
        }
    }


    /**
     * Возвращает массив населенных пунктов
     * @param $pageId
     * @return array
     */
    private function getChildTowns($pageId) {
        $sql = "
            SELECT 
                name,
                cpu_path
            FROM 
                pages 
            WHERE 
                parent_id = $pageId
                AND public = 1
            ORDER BY
                type, name";
        $towns = Database::query($sql, 'withCount');
        if ($towns->rowCount > 0) {
            foreach ($towns->result as &$town) {
                $town = (object)$town;
                $town->title = mb_ucfirst(str_replace([' ', ' '], ' ', $town->name));
                $town->link = $town->cpu_path;
                $town->type = 'town';
            }
            return $towns->result;
        } else {
            return array();
        }
    }


    /**
     * Возвращает массив склоненных имен родителя
     * @param $parentId
     * @return object
     */
    private function getParentTownNames($parentId) {
        $sql = "
            SELECT 
                name,
                p_ro,
                p_da,
                p_ve,
                p_tv,
                p_pr,
                p_ro_with_type, 
                p_da_with_type, 
                p_ve_with_type, 
                p_tv_with_type, 
                p_pr_with_type
            FROM 
                pages 
            WHERE 
                id = $parentId
                AND public = 1
            ORDER BY
                id";
        $page = Database::query($sql, 'fetch');
        return (object)$page;
    }


    /**
     * Делает первую букву заглавной в текстах стараницы
     * @param $page
     * @return mixed
     */
    private function setUCFirstInTexts($page) {
        $page->top_text = mb_ucfirst(trim($page->top_text));
        $page->bottom_text = mb_ucfirst(trim($page->bottom_text));
        return $page;
    }

    /**
     * @param $page
     * @return mixed
     */
    private function replaceWordsInTextToNames($page) {
        foreach ($page as $key => $value) {
            $page->$key = mb_str_replace('#нас-пункт-пр#', $page->p_ro, $page->$key);
            $page->$key = mb_str_replace('#нас-пункт-пд#', $page->p_da, $page->$key);
            $page->$key = mb_str_replace('#нас-пункт-пв#', $page->p_ve, $page->$key);
            $page->$key = mb_str_replace('#нас-пункт-пт#', $page->p_tv, $page->$key);
            $page->$key = mb_str_replace('#нас-пункт-пп#', $page->p_pr, $page->$key);

            $page->$key = mb_str_replace('#name#', $page->name, $page->$key);

            $page->$key = mb_str_replace('#p_ro#', $page->p_ro, $page->$key);
            $page->$key = mb_str_replace('#p_da#', $page->p_da, $page->$key);
            $page->$key = mb_str_replace('#p_ve#', $page->p_ve, $page->$key);
            $page->$key = mb_str_replace('#p_tv#', $page->p_tv, $page->$key);
            $page->$key = mb_str_replace('#p_pr#', $page->p_pr, $page->$key);

            // Так как нет в БД значений для всех переменных с with_type, заменяем их вместо
            //    $page->$key = mb_str_replace('#p_ro_with_type#', $page->p_ro_with_type, $page->$key);
            // на
            $page->$key = mb_str_replace('#p_ro_with_type#', $page->p_ro, $page->$key);
            $page->$key = mb_str_replace('#p_da_with_type#', $page->p_da, $page->$key);
            $page->$key = mb_str_replace('#p_ve_with_type#', $page->p_ve, $page->$key);
            $page->$key = mb_str_replace('#p_tv_with_type#', $page->p_tv, $page->$key);
            $page->$key = mb_str_replace('#p_pr_with_type#', $page->p_pr, $page->$key);

            $page->$key = mb_str_replace('#zn_1#', $page->zn_1, $page->$key);
            $page->$key = mb_str_replace('#zn_2#', $page->zn_2, $page->$key);
            $page->$key = mb_str_replace('#zn_3#', $page->zn_3, $page->$key);
            $page->$key = mb_str_replace('#zn_4#', $page->zn_4, $page->$key);
            $page->$key = mb_str_replace('#zn_5#', $page->zn_5, $page->$key);
            $page->$key = mb_str_replace('#zn_6#', $page->zn_6, $page->$key);
            $page->$key = mb_str_replace('#zn_7#', $page->zn_7, $page->$key);
            $page->$key = mb_str_replace('#etnohoronim_mn_p_da#', $page->etnohoronim_mn_p_da, $page->$key);

            $page->$key = Page::replacePhones($page->$key);
        }
        return $page;
    }


    /**
     * Генерирует отзывы для левого блока по правилам
     * @param $page
     */
    private function setReviewsOnLeftBlock($page) {
        // В панеле управления должно быть так:
        //      Москва
        //          в панеле в списке только Москва и 4 города Москвы
        //          При выборе Москва - отзыв отобрашается на всех районах и округах Москвы
        //          в зависимости от услуги

        //      Московская область
        //          Все районы
        //          все нас пункты (иерархически)

        switch ($page->page_type) {
            case 'town':
                // ЭТО РАБОТАЕТ ТОЛЬКО ДЛЯ МОСКВЫ
                // В МОСКВЕ ВООБЩН ВСЕ С ТИПОМ town, сделано было для удобства,
                // чтобы показывать сразу услуги
                // ведь у элементов МОСКВЫ нет дочерних элементов
                if ($page->id >= 10000) {
                    switch ($page->type) {
                        // ДЛЯ ЦАО и РАЙОНОВ
                        case 'okrug':
                        case 'raion':
                            $this->buildReviewsOnLeftBlock(array(
                                'townId' => 10000,
                                'service' => 'Транспортные услуги'
                            ));
                            break;
                        // ДЛЯ ГОРОДОВ (4 штуки)
                        case 'town':
                            $this->buildReviewsOnLeftBlock(array(
                                'townId' => $page->id,
                                'service' => 'Транспортные услуги'
                            ));
                            break;
                    }
                }

                // ЭТО РАБОТАЕТ ТОЛЬКО НА МОСКОВСКОЙ ОБЛАСТИ
                if ($page->id < 10000) {
                    $this->buildReviewsOnLeftBlock(array(
                        'townId' => $page->id,
                        'service' => 'Транспортные услуги'
                    ));
                }
                break;

            case 'connected':
                // ЭТО РАБОТАЕТ ТОЛЬКО НА МОСКОВСКОЙ ОБЛАСТИ
                // Транспортные услуги :
                // Если выбрана Москва - Это связующая страница connected везде + страница контента (+) /services/transportnye-uslugi/
                // Если выбрана МО - на страницу только на https://dp.local/moskovskaya-oblast/
                // Если выбран нас. пункт МО - то на его страницу connected
                // Если выбран район МО - то на его страницу connected
                $this->buildReviewsOnLeftBlock(array(
                    'townId' => $page->id,
                    'service' => 'Транспортные услуги'
                ));
                break;

            case 'service':
                // Показываем отзывы привязанные к родителю (так как мы на услуге, а нам нужен нас. пункт)
                $townId = $page->parent_id;

                // ЭТО РАБОТАЕТ ТОЛЬКО ДЛЯ МОСКВЫ
                // Если это страница услуги любого населенного пункта Москвы
                if ($page->parent_id >= 10000) {
                    // значит показываем в этой услуги отзывы со ВСЕЙ Москвы
                    $townId = 10000;

                    // НО!
                    // Если это города Москвы (их всего 4), показываем отзывы именно этих городов
                    $parentPageType = Database::query("select type from pages where id = $page->parent_id", 'fetch');
                    if ($parentPageType['type'] == 'town') {
                        $townId = $page->parent_id;
                    }
                }


                switch (Core::getUrl()->lastUriPart) {
                    case 'gruzoperevozki':
                        // Грузоперевозки
                        // Если выбрана Москва отображаются на главной странице (+) https://dp.local/
                        //      + на всех районах и округах Москвы
                        // Если выбран нас. пункт МО - то на его страницу
                        // Если выбран район МО - то на его страницу
                        $this->buildReviewsOnLeftBlock(array(
                            'townId' => $townId, // (+)
                            'service' => 'Грузоперевозки'
                        ));
                        break;

                    case 'kvartirnyj-pereezd':
                    case 'ofisnyj-pereezd':
                    case 'dachnyj-pereezd':
                        // Переезды (все услуги переездов)
                        // Если выбрана Москва отображаются на страницах контента: (+)
                        //      Квартирный переезд
                        //      Офисный переезд
                        //      Дачный переезд
                        // + на всех районах и округах Москвы
                        //  Если выбран нас. пункт МО - то на его страницу
                        //  Если выбран район МО - то на его страницу
                        $this->buildReviewsOnLeftBlock(array(
                            'townId' => $townId, // (+ на всех районах и округах Москвы)
                            'service' => 'Переезды'
                        ));
                        break;

                    case 'vyvoz-mebeli':
                        // Вывоз мебели
                        // Если выбрана Москва контент (+) Вывоз старой мебели
                        // + на всех районах и округах Москвы
                        //  Если выбран нас. пункт МО - то на его страницу
                        //  Если выбран район МО - то на его страницу
                        $this->buildReviewsOnLeftBlock(array(
                            'townId' => $townId, // (+ на всех районах и округах Москвы)
                            'service' => 'Вывоз мебели'
                        ));
                        break;

                    case 'perevozka-pianino':
                        // Перевозка пианино
                        // Если выбрана Москва контент (+) Перевозка пианино
                        // + на всех районах и округах Москвы
                        //  Если выбран нас. пункт МО - то на его страницу
                        //  Если выбран район МО - то на его страницу
                        $this->buildReviewsOnLeftBlock(array(
                            'townId' => $townId, // (+ на всех районах и округах Москвы)
                            'service' => 'Перевозка пианино'
                        ));
                        break;

                    case 'gruzovoe-taksi':
                        // Грузовое такси
                        // Если выбрана Москва, на всех районах и округах Москвы
                        //  Если выбран нас. пункт МО - то на его страницу
                        //  Если выбран район МО - то на его страницу
                        $this->buildReviewsOnLeftBlock(array(
                            'townId' => $townId, // (+ на всех районах и округах Москвы)
                            'service' => 'Грузовое такси'
                        ));
                        break;

                    case 'perevozka-mebeli':
                        // Певозка мебели
                        // Если выбрана Москва, контент Перевозка мебели
                        // + на всех районах и округах Москвы
                        //  Если выбран нас. пункт МО - то на его страницу
                        //  Если выбран район МО - то на его страницу
                        $this->buildReviewsOnLeftBlock(array(
                            'townId' => $townId, // (+ на всех районах и округах Москвы)
                            'service' => 'Перевозка мебели'
                        ));
                        break;
                }
                break;
            default:
        }
    }


    /**
     * Отображаем страницу
     */
    public function view() {
        parent::view();

        $page = $this->getPageByUrlPath(Core::getUrl()->urlPath);
        $texts = $this->getTextsByPageID($page->id, 'pages_texts');

        $additionalFilelds = $this->getAdditionalFields();

        // Соединяем все подготовленное в общий объект
        $page = (object)array_merge((array)$page, (array)$texts);
        $page = (object)array_merge((array)$page, (array)$additionalFilelds);

        Core::getSmarty()->assign('carsForMap', Cars::getCarsJsonForYandexMap());

        if (!empty($page->galleryCategoryID)) {
            Core::getSmarty()->assign('photogallery', Photogallery::getImages($page->galleryCategoryID));
        }

        switch ($page->page_type) {
            case 'service':
                // Так как это дочерняя страница - услуга, чтобы нам узнать имя этого населенного пункта,
                // получаем родителя (так как нас. пункт это родитель страницы услуги в БД)
                // и для удобства, заменяем в объекте $page данные некоторых ключей, на данные ключей объекта,
                // что получила функция getParentTownNames()
                // (ключи у $page и объекта возвращаемого getParentTownNames() одинаковые)
                $page = (object)array_merge((array)$page, (array)$this->getParentTownNames($page->parent_id));

                // Дополнительные услуги для списка услуг (используя parent_id)
                Core::getSmarty()->assign('similarServices', $this->getSimilarServices($page->parent_id));
                Core::getSmarty()->assign('cars', Cars::getCars());
                break;
            case 'connected':
            case 'town':
                if ($page->page_type == 'connected') {
                    // На странице районов и областей Вместо услуг в списке выводим СПИСОК НАСЕЛЕННЫХ ПУНКТОВ
                    Core::getSmarty()->assign('similarServices', $this->getChildTowns($page->id));
                } else {
                    // Дополнительные услуги для списка услуг
                    Core::getSmarty()->assign('similarServices', $this->getSimilarServices($page->id));
                }
                break;
        }

        // Middleware
        $page = $this->replaceWordsInTextToNames($page);
        $page = $this->replaceWordsInTextOnLinks($page);
        $page = $this->setUCFirstInTexts($page);

        // Обновляем хлебные крошки, добавляя название страницы в конец
        $this->updateBreadcrumb($page);

        // Формируем отзывы слева в блоке
        $this->setReviewsOnLeftBlock($page);

        Core::getSmarty()->assign('mapPath', str_replace('*', ',', $page->breadcrumb_names));

        // Эти свойства в шаблоне берутся из $page напрямую
        $page->breadcrumb_names = explode('*', $page->breadcrumb_names);
        $page->breadcrumb_paths = explode('*', $page->breadcrumb_paths);
        array_pop($page->breadcrumb_names);
        array_pop($page->breadcrumb_paths);

        Core::getSmarty()->assign('page', $page);
        Core::getSmarty()->assign('metaTitle', $page->meta_title);
        Core::getSmarty()->assign('metaDescription', $page->meta_description);
        Core::getSmarty()->assign('metaKeywords', $page->meta_keywords);
        // end Middleware

        switch ($page->page_type) {
            case 'service':
                Core::getSmarty()->display('mskServicesPage__service.tpl');
                break;
            case 'connected':
            case 'town':
                Core::getSmarty()->display('mskServicesPage__default.tpl');
                break;
        }
    }
}