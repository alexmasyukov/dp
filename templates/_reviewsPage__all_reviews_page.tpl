<div class="bl text text-top">
    <p>Отзывы клиентов — самая важная оценка нашей работы.</p>

    <p>
        Выполнение таких ответственных работ как перевозка дорогой мебели и бытовой техники,
        перевозка пианино и роялей, а также другой такелаж требует подбора ответственного,
        профессионального исполнителя с большим опытом работы. В подтверждение высокой
        репутации компании «ДомПереездов», мы публикуем здесь отзывы реальных людей и фирм,
        доверивших нам перевозку и такелаж.
    </p>

    <p> Мы не занимаемся подделкой отзывов! Наши заказчики пишут отзывы через <span
                class="add_feedback">специальную
                                    защищённую форму</span> на сайте, после чего мы их публикуем. Все отзывы содержат
        реальные
        данные и точную информацию. Думаем, вам будет любопытно узнать мнения людей, которые
        уже заказывали у нас услуги грузоперевозки, переезда или такелажные работы.
    </p>

    <p> Став нашим клиентом, заполните и вы анкету с отзывом!</p>

    <p>Для нас важен каждый отзыв - это показатель уровня нашей работы и справедливая оценка
        заказчиков.</p>

    <p>Количество отзывов - <span style="font-size: 140%;">{$countAllReviews}</span></p>
</div>


<ul class="bl uslugi-ul">
    {foreach from=$painTable key=k item=$pain}
        <li><a href="https://{$HTTP_HOST}/otzyvy/{$k}/">{$pain}</a></li>
    {/foreach}
</ul>

{if $reviews}
    <div class="row">
        {foreach from=$reviews key=k item=$review}
            {include '_review.tpl'}
        {/foreach}
    </div>
{/if}

{include '_reviewsPage__pagination.tpl'}


