using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;

public class ValueBar : MonoBehaviour,IPointerEnterHandler,IPointerExitHandler
{
    public Slider slider;
    public GameObject Names;
    public Gradient gradient;
    public Image fill;

    public void SetValue(int value)
    {
        slider.value = value;
        fill.color = gradient.Evaluate(slider.normalizedValue);
    }
    public void OnPointerEnter(PointerEventData eventData)
    {
        Names.SetActive(true);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        Names.SetActive(false);
    }
}
