# Generated by Django 3.2 on 2021-04-29 14:48

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('hotelcheckin_register', '0001_initial'),
    ]

    operations = [
        migrations.AlterField(
            model_name='hotel',
            name='roomtype',
            field=models.CharField(choices=[('D', 'DELLUXE ROOMS ( 200$ )'), ('J', 'JUNIOR SUITE ( 250$ )'), ('G', 'GRAND SUITE ( 300$ )')], default='D', max_length=100),
        ),
    ]
