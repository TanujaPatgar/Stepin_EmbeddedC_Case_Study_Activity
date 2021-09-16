#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED

#define SET_TIMER1_FAST_PWM TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10)

#define PRESCALE_TIMER_64 TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10)

#define SET_PWM_AS_OUTPUT DDRB|=(1<<PB1)


void TimerWaveGenMode(void);
void pwm_output(void);

#endif // ACTIVITY3_H_INCLUDED
