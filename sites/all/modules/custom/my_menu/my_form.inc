<?php

/**
 * @file
 * Test form.
 */

function my_form($form, &$form_state) {

    $form['city'] = array(
        '#type' => 'textfield',
        '#title' => t('NAME'),
        '#description' => t('Get your name! Example - "Alex"'),
        '#default_value' => !empty($form_state['values']['name']) ? $form_state['values']['name'] : '',
    );

    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Submit'),
    );
    return $form;
}

/**
 * Submit handler for my_form().
 */
function my_form_submit($form, &$form_state) {
    drupal_set_message(t('Done'));
//    drupal_set_message(t('Submitting values: @values', array('@values' => var_export($form_state['values'], TRUE))));
}