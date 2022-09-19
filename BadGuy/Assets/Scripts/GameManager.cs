using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;

public class GameManager : MonoBehaviour
{
    public int valueOne = 50, valueTwo = 50, valueThree = 50, valueFour = 50;
    public ValueBar vOne, vTwo, vThree, vFour;
    public GameObject[] cards;
    public GameObject spawnPoint, canvas,Panel,DrugE,GamblingE,LoanE,GunE,BacktoMain;

    int _current, _prev = 0;
    TextMeshProUGUI timer;
    int _timerC = 0;
    private void Start()
    {
        SetSlider();
        timer = GameObject.FindWithTag("Timer").GetComponent<TextMeshProUGUI>();
    }
    public void SpawnCard()
    {
     TurnP:
        _current = Random.Range(0, cards.Length);
        if (_prev != _current)
        {
            _prev = _current;
            Instantiate(cards[_current], spawnPoint.transform.position, spawnPoint.transform.rotation, canvas.transform);
            _timerC++;
            timer.text = _timerC + ". Ay";
        }
        else
        {
            goto TurnP;
        }
    }
    public void SetSlider()
    {
        vOne.SetValue(valueOne);
        vTwo.SetValue(valueTwo);
        vThree.SetValue(valueThree);
        vFour.SetValue(valueFour);
    }
    public void ChangeValue(int cOne,int cTwo,int cThree,int cFour)
    {
        valueOne += cOne;
        valueTwo += cTwo;
        valueThree += cThree;
        valueFour += cFour;
        if (valueOne > 100 || 0 > valueOne)
        {
            Panel.SetActive(true);
            LoanE.SetActive(true);
            BacktoMain.SetActive(true);
        }
        else if (valueTwo > 100 || 0 > valueTwo)
        {
            Panel.SetActive(true);
            GamblingE.SetActive(true);
            BacktoMain.SetActive(true);
        }
        else if (valueThree > 100 || 0 > valueThree)
        {
            Panel.SetActive(true);
            DrugE.SetActive(true);
            BacktoMain.SetActive(true);
        }
        else if (valueFour > 100 || 0 > valueFour)
        {
            Panel.SetActive(true);
            GunE.SetActive(true);
            BacktoMain.SetActive(true);
        }
    }
    public void Restart()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
